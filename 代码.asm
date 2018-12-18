              ASSUME    CS:CODE,DS:DATA
        DATA  SEGMENT
       ASCII  DB        10H
        DATA  ENDS
        CODE  SEGMENT
      START:
              MOV       AX,DATA
              MOV       DS,AX
              MOV       CX,15
              MOV       BX,0
              MOV       DL,0
	
         S1:
              MOV       BX,CX
              MOV       CX,16
         S2:  MOV       DL,ASCII
              MOV       AH,02H
              INT       21H
              MOV       DL,20H
              MOV       AH,02H
              INT       21H
              INC       ASCII
              LOOP      S2
	
              MOV       CX,BX
              MOV       DL,0AH
              MOV       AH,02H
              INT       21H
              LOOP      S1
	
              MOV       AX,4C00H
              INT       21H
        CODE  ENDS
              END       START
	
	
