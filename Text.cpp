#include "Text.h"
#include<GLFW/glfw3.h>
#include<iostream>
#include <ft2build.h>
#include <string>

Text::Text()
{
	SetFontLibrary();
}

Text::Text(const char* fontname)
{
	SetFontLibrary();
	LoadFont(fontname);
}

void Text::OnDraw()
{
}

void Text::OnDestroy()
{
}

void Text::SetFontLibrary()
{
	//FOR DEBUG, DON'T DELETE
	if (FT_Init_FreeType(&_library))
	{
		std::cout << "ERROR: Could not initialize Freetype Library" << std::endl;
	}
	else
	{
		std::cout << "Freetype Library Successfully Loaded!" << std::endl;
	}
}

void Text::LoadFont(const char* fontname)
{
	//Create font destination string
	std::string fontdestination = "fonts/";
	fontdestination.append(fontname);
	fontdestination.append(".ttf");

	//FOR DEBUG, DON'T DELETE
	if (FT_New_Face(_library, fontdestination.c_str(), 0, &_font))
	{
		std::cout << "ERROR: Freetype could not load " << fontname << " from font library. ";
		std::cout << "Please check your fonts directory to see if your font is in \"fonts/\" and is of type .ttf" << std::endl;
		return;
	}
	else
	{
		std::cout << "Font face " << fontname << " has been loaded" << std::endl;
	}
}

void Text::LoadCharacters()
{
	if (!_font)
	{
		LoadFont("arial");
	}

	//Makes sure the character texture is 1-byte aligned.
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	for (unsigned char c = 0; c < 128; c++)
	{
		//If freetype throws an error trying to load the character
		if (FT_Load_Char(_font, c, FT_LOAD_RENDER))
		{
			std::cout << "ERROR: Could not load glyph" << c << std::endl;
			continue;
		}

		//Generate character texture
		unsigned int texture;
		glGenTextures(1, &texture);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTexImage2D(
			GL_TEXTURE_2D,
			0,
			GL_RED, //store each byte of the bitmap buffer as the texture's single color value
			_font->glyph->bitmap.width,
			_font->glyph->bitmap.rows,
			0,
			GL_RED, //store each byte of the bitmap buffer as the texture's single color value
			GL_UNSIGNED_BYTE,
			_font->glyph->bitmap.buffer);

		//Set Texture Options
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

		//Store the character as a Kharacter
		Kharacter character = {
			texture,
		};

		// Insert the Kharacter in a map
	}
}
