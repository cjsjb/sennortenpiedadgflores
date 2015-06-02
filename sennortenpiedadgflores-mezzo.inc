\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		\key c \major
		R1*2  |
		f' 2 e'  |
		f' 2 e' 4 ( d' )  |
%% 5
		c' 2 d'  |
		d' 2 r  |
		f' 2 e'  |
		d' 2 c' 4 ( b )  |
		a 4 ( c' ) fis ( a )  |
%% 10
		b 2 r  |
		\key d \major
		g' 4 ( fis' ) a 2  |
		\key d \major
		d' 4 ( cis' ) a 2  |
		g 4 a 8 b ~ b 4 r  |
		a 4 b 8 cis' ~ cis' 4 r  |
%% 15
		g' 4 ( fis' ) a 2  |
		d' 4 ( cis' ) a 2  |
		g 4 a 8 b ~ b 4 r  |
		\key c \major
		c' 4 c' 8 c' ~ c' 2 ~  |
		c' 2 r  |
%% 20
		f' 2 e'  |
		d' 2 c' 4 ( b )  |
		a 2 a  |
		b 2 r  |
		f' 2 e'  |
%% 25
		d' 2 c' 4 ( b )  |
		a 4 ( c' ) fis ( a )  |
		b 2 r4 b  |
		cis' 1  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		Se -- ñor, Se -- ñor, __ ten pie -- dad.
		Se -- ñor, Se -- ñor, __ ten __ pie __ dad.

		Cris -- to, Cris -- to, ten pie -- dad, __ ten pie -- dad.
		Cris -- to, Cris -- to, ten pie -- dad, __ ten pie -- dad. __

		Se -- ñor, Se -- ñor, __ ten pie -- dad.
		Se -- ñor, Se -- ñor, __ ten pie -- dad,
		pie -- dad.
	}
>>
