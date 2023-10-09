#pragma once
#include "Vector.h"
#include "Aktor.h"
#include <ft2build.h>
#include FT_FREETYPE_H

class Text : Aktor
{
public:
	Text();
	Text(const char* fontname);

private:
	void SetFontLibrary();
	void LoadFont(const char* fontname);

private:
	FT_Library _library;
	FT_Face _font;
};