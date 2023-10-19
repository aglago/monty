,       ; Read first digit into the first cell
-       ; Convert ASCII to integer
>++++    ; Move to the second cell and set it to 4 (ASCII value of '4')
<       ; Move back to the first cell
++++    ; Add 4 to the first digit
[       ; Start loop
    ->- ; Subtract 1 from the first digit and decrement the second digit
    >>+  ; Move to the third cell and increment it
    <<   ; Move back to the first and second cells
    <<<  ; Move back to the first cell
]       ; End loop
>>.     ; Move to the third cell and print it as an ASCII character
