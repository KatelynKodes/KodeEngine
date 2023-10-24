#pragma once
#include "EngineMath/Vector.h"
#include "Aktor.h"
#include <GLFW/glfw3.h>
#include <ft2build.h>
#include <map>
#include FT_FREETYPE_H

class Text : Aktor
{
	struct Kharacter
	{
		unsigned int TextureID;
		Vector2 KharacterSize;
		Vector2 KharacterBearing;
		unsigned int KharacterSpacing;
	};

public:
	Text();
	Text(const char* fontname);
	void OnStart() override;
	void OnDraw() override;
	void OnDestroy() override;

private:
	void SetFontLibrary();
	void LoadFont(const char* fontname);
	void LoadCharacters();

private:
	FT_Library _library;
	FT_Face _font;
	std::map<char, Kharacter> Kharacters;
};