\context Staff = "Violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "Vln."
	\set Staff.midiInstrument = "Violin"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		\key c \major
		f' 2 e'  |
		f' 2 e'  |
		R1*3  |
		r2 r8 b' a' g'  |
		f' 2 e'  |
		f' 2 g' 4 a' 8 b'  |
		c'' 2 d''  |
%% 10
		b' 1  |
		\key d \major
		r2 r8 e' a' d''  |
		g'' 4 fis'' e'' d''  |
		b' 1  |
		cis'' 1  |
%% 15
		r2 r8 e' a' d''  |
		g'' 4 fis'' e'' fis''  |
		g'' 1  |
		\key c \major
		g'' 1 ~  |
		g'' 1  |
%% 20
		R1*3  |
		r2 r8 b' a' g'  |
		f' 2 e'  |
%% 25
		f' 2 g' 4 a' 8 b'  |
		c'' 2 b'  |
		b' 1  |
		cis'' 1  |
		\bar "|."
	}
>>
