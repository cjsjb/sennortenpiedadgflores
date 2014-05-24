\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
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
		f' 2 e' 4 ( d' )  |
		c' 2 d'  |
%% 10
		d' 2 r  |

		\key d \major
		g' 4 ( fis' ) a 2  |
		g' 4 ( fis' ) a 2  |
		b 4 cis' 8 d' ~ d' 4 r  |
		cis' 4 d' 8 e' ~ e' 4 r  |
%% 15
		g' 4 ( fis' ) a 2  |
		g' 4 ( fis' ) a 2  |
		b 4 cis' 8 d' ~ d' 4 r  |

		\key c \major
		c' 4 d' 8 e' ~ e' 2 ~  |
		e' 2 r  |
%% 20
		f' 2 e'  |
		f' 2 e' 4 ( d' )  |
		c' 2 d'  |
		d' 2 r  |
		f' 2 e'  |
%% 25
		f' 2 e' 4 ( d' )  |
		c' 2 d'  |
		d' 2 r4 d'  |
		e' 1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		Se -- ñor, Se -- ñor, __ ten pie -- dad.
		Se -- ñor, Se -- ñor, __ ten pie -- dad.

		Cris -- to, Cris -- to, ten pie -- dad, __ ten pie -- dad.
		Cris -- to, Cris -- to, ten pie -- dad, __ ten pie -- dad. __

		Se -- ñor, Se -- ñor, __ ten pie -- dad.
		Se -- ñor, Se -- ñor, __ ten pie -- dad,
		pie -- dad.
	}
>>
