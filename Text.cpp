#include "Text.h"
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
	}
	else
	{
		std::cout << "Font face " << fontname << " has been loaded" << std::endl;
	}
}
