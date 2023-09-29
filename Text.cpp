#include "Text.h"
#include<iostream>
#include <ft2build.h>

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
	
}
