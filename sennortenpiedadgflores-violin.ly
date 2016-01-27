% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Señor, ten piedad"
	instrument = "Soprano + Violín"
	composer = "P. Gerardo Flores"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*26
}
globalTempo = {
	\tempo 4 = 85  \skip 1*26
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "sennortenpiedadgflores-acordes.inc"
		\include "sennortenpiedadgflores-soprano.inc"
		\new StaffGroup <<
			\include "sennortenpiedadgflores-violin.inc"
			%\include "sennortenpiedadgflores-viola.inc"
			%\include "sennortenpiedadgflores-cello.inc"
		>>

	>>

	\layout {
		\context {
			%\RemoveEmptyStaffContext
		}
	}
}