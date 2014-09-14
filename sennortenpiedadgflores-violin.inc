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
		g' 1  |
		g' 1  |
		R1*4  | s1*4  |
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
		g'' 1  |
		s1*1  | R1*4  | s1*5  |
		\bar "|."
	}
>>
