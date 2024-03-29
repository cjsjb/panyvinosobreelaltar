% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Pan y vino sobre el altar"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Soprano"
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
	\skip 1*19  %% 1-19
}
globalTempo = {
	\tempo 4 = 135  \skip 1*19
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "panyvinosobreelaltar-acordes.inc"
		\include "panyvinosobreelaltar-marcas.inc"
		\include "panyvinosobreelaltar-soprano.inc"
	>>

	\layout { }
}
