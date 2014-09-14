\context Staff = "Viola" <<
	\set Staff.instrumentName = "Viola"
	\set Staff.shortInstrumentName = "Vla."
	\set Staff.midiInstrument = "Viola"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-viola" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "alto"

		\key c \major
		f' 2 e'  |
		d' 2 e'  |
		R1*4  | s1*4  |
		\key d \major
		r2 r8 e a d'  |
		g' 4 fis' e' d'  |
		d' 1  |
		e' 1  |
%% 15
		r2 r8 e a d'  |
		g' 4 fis' e' d'  |
		b 1  |
		\key c \major
		e' 1  |
		s1*1  | R1*4  | s1*5  |
		\bar "|."
	}
>>
