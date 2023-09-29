#include "Text.h"
#include<iostream>
#include <ft2build.h>
#include FT_FREETYPE_H

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
}

void Text::LoadFont(const char* fontname)
{
	
}
