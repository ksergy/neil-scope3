﻿// 
//  Font data for Times New Roman 12pt
// 
#include <stdint.h>                           /* Include standard types */
#include "HX8352_Library.h"

// Character bitmaps for Times New Roman 12pt
const uint8_t timesNewRoman12ptBitmaps[] = 
{
	// @0 ' ' (2 pixels wide)
	0x00, 0x00, //                 
	0x00, 0x00, //                 

	// @4 '!' (1 pixels wide)
	0x0B, 0xFE, //     # ######### 

	// @6 '"' (3 pixels wide)
	0x00, 0x1E, //            #### 
	0x00, 0x00, //                 
	0x00, 0x1E, //            #### 

	// @12 '#' (8 pixels wide)
	0x01, 0x20, //        #  #     
	0x0F, 0x20, //     ####  #     
	0x01, 0xF0, //        #####    
	0x01, 0x2E, //        #  # ### 
	0x0F, 0x20, //     ####  #     
	0x01, 0xF0, //        #####    
	0x01, 0x2E, //        #  # ### 
	0x01, 0x20, //        #  #     

	// @28 '$' (6 pixels wide)
	0x06, 0x1C, //      ##    ###  
	0x08, 0x22, //     #     #   # 
	0x1F, 0xFF, //    #############
	0x08, 0x42, //     #    #    # 
	0x08, 0x82, //     #   #     # 
	0x07, 0x0C, //      ###    ##  

	// @40 '%' (12 pixels wide)
	0x00, 0x3C, //           ####  
	0x00, 0x42, //          #    # 
	0x0C, 0x42, //     ##   #    # 
	0x02, 0x3C, //       #   ####  
	0x01, 0x00, //        #        
	0x00, 0xC0, //         ##      
	0x00, 0x20, //           #     
	0x00, 0x10, //            #    
	0x07, 0x8C, //      ####   ##  
	0x08, 0x42, //     #    #    # 
	0x08, 0x40, //     #    #      
	0x07, 0x80, //      ####       

	// @64 '&' (11 pixels wide)
	0x07, 0x00, //      ###        
	0x0C, 0x80, //     ##  #       
	0x08, 0x5C, //     #    # ###  
	0x08, 0x62, //     #    ##   # 
	0x08, 0xE2, //     #   ###   # 
	0x07, 0x12, //      ###   #  # 
	0x06, 0x1C, //      ##    ###  
	0x09, 0xA0, //     #  ## #     
	0x08, 0x60, //     #    ##     
	0x08, 0x20, //     #     #     
	0x04, 0x00, //      #          

	// @86 ''' (1 pixels wide)
	0x00, 0x1E, //            #### 

	// @88 '(' (4 pixels wide)
	0x07, 0xE0, //      ######     
	0x18, 0x18, //    ##      ##   
	0x20, 0x04, //   #          #  
	0x40, 0x02, //  #            # 

	// @96 ')' (4 pixels wide)
	0x40, 0x02, //  #            # 
	0x20, 0x04, //   #          #  
	0x18, 0x18, //    ##      ##   
	0x07, 0xE0, //      ######     

	// @104 '*' (7 pixels wide)
	0x00, 0x24, //           #  #  
	0x00, 0x24, //           #  #  
	0x00, 0x18, //            ##   
	0x00, 0x7E, //          ###### 
	0x00, 0x18, //            ##   
	0x00, 0x24, //           #  #  
	0x00, 0x24, //           #  #  

	// @118 '+' (9 pixels wide)
	0x00, 0x40, //          #      
	0x00, 0x40, //          #      
	0x00, 0x40, //          #      
	0x00, 0x40, //          #      
	0x07, 0xFC, //      #########  
	0x00, 0x40, //          #      
	0x00, 0x40, //          #      
	0x00, 0x40, //          #      
	0x00, 0x40, //          #      

	// @136 ',' (2 pixels wide)
	0x28, 0x00, //   # #           
	0x18, 0x00, //    ##           

	// @140 '-' (4 pixels wide)
	0x01, 0x00, //        #        
	0x01, 0x00, //        #        
	0x01, 0x00, //        #        
	0x01, 0x00, //        #        

	// @148 '.' (1 pixels wide)
	0x08, 0x00, //     #           

	// @150 '/' (4 pixels wide)
	0x0C, 0x00, //     ##          
	0x03, 0xC0, //       ####      
	0x00, 0x38, //           ###   
	0x00, 0x06, //              ## 

	// @158 '0' (6 pixels wide)
	0x03, 0xF8, //       #######   
	0x04, 0x04, //      #       #  
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x04, 0x04, //      #       #  
	0x03, 0xF8, //       #######   

	// @170 '1' (4 pixels wide)
	0x00, 0x04, //              #  
	0x08, 0x04, //     #        #  
	0x0F, 0xFE, //     ########### 
	0x08, 0x00, //     #           

	// @178 '2' (6 pixels wide)
	0x0C, 0x0C, //     ##      ##  
	0x0A, 0x02, //     # #       # 
	0x09, 0x02, //     #  #      # 
	0x08, 0x82, //     #   #     # 
	0x08, 0x44, //     #    #   #  
	0x0C, 0x38, //     ##    ###   

	// @190 '3' (6 pixels wide)
	0x08, 0x04, //     #        #  
	0x08, 0x02, //     #         # 
	0x08, 0x42, //     #    #    # 
	0x08, 0x62, //     #    ##   # 
	0x04, 0x52, //      #   # #  # 
	0x03, 0x8C, //       ###   ##  

	// @202 '4' (7 pixels wide)
	0x01, 0x80, //        ##       
	0x01, 0x40, //        # #      
	0x01, 0x20, //        #  #     
	0x01, 0x18, //        #   ##   
	0x01, 0x04, //        #     #  
	0x0F, 0xFE, //     ########### 
	0x01, 0x00, //        #        

	// @216 '5' (6 pixels wide)
	0x08, 0x10, //     #      #    
	0x08, 0x1C, //     #      ###  
	0x08, 0x12, //     #      #  # 
	0x08, 0x12, //     #      #  # 
	0x04, 0x22, //      #    #   # 
	0x03, 0xC2, //       ####    # 

	// @228 '6' (6 pixels wide)
	0x03, 0xE0, //       #####     
	0x04, 0x58, //      #   # ##   
	0x08, 0x24, //     #     #  #  
	0x08, 0x22, //     #     #   # 
	0x04, 0x42, //      #   #    # 
	0x03, 0x82, //       ###     # 

	// @240 '7' (7 pixels wide)
	0x00, 0x04, //              #  
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 
	0x0C, 0x02, //     ##        # 
	0x03, 0x82, //       ###     # 
	0x00, 0x72, //          ###  # 
	0x00, 0x0E, //             ### 

	// @254 '8' (6 pixels wide)
	0x07, 0x1C, //      ###   ###  
	0x08, 0xA2, //     #   # #   # 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x08, 0xA2, //     #   # #   # 
	0x07, 0x1C, //      ###   ###  

	// @266 '9' (6 pixels wide)
	0x08, 0x38, //     #     ###   
	0x08, 0x46, //     #    #   ## 
	0x04, 0x82, //      #  #     # 
	0x04, 0x82, //      #  #     # 
	0x03, 0x44, //       ## #   #  
	0x00, 0xF8, //         #####   

	// @278 ':' (1 pixels wide)
	0x08, 0x20, //     #     #     

	// @280 ';' (2 pixels wide)
	0x28, 0x20, //   # #     #     
	0x18, 0x00, //    ##           

	// @284 '<' (7 pixels wide)
	0x00, 0x40, //          #      
	0x00, 0xA0, //         # #     
	0x00, 0xA0, //         # #     
	0x01, 0x10, //        #   #    
	0x01, 0x10, //        #   #    
	0x01, 0x10, //        #   #    
	0x02, 0x08, //       #     #   

	// @298 '=' (9 pixels wide)
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     
	0x01, 0x20, //        #  #     

	// @316 '>' (7 pixels wide)
	0x02, 0x08, //       #     #   
	0x01, 0x10, //        #   #    
	0x01, 0x10, //        #   #    
	0x01, 0x10, //        #   #    
	0x00, 0xA0, //         # #     
	0x00, 0xA0, //         # #     
	0x00, 0x40, //          #      

	// @330 '?' (5 pixels wide)
	0x00, 0x0C, //             ##  
	0x00, 0x02, //               # 
	0x0B, 0x82, //     # ###     # 
	0x00, 0x62, //          ##   # 
	0x00, 0x1C, //            ###  

	// @340 '@' (14 pixels wide)
	0x0F, 0xC0, //     ######      
	0x10, 0x30, //    #      ##    
	0x20, 0x08, //   #         #   
	0x4F, 0x04, //  #  ####     #  
	0x88, 0xC4, // #   #   ##   #  
	0x88, 0x22, // #   #     #   # 
	0x84, 0x12, // #    #     #  # 
	0x8F, 0x12, // #   ####   #  # 
	0x89, 0xE2, // #   #  ####   # 
	0x88, 0x32, // #   #     ##  # 
	0x44, 0x04, //  #   #       #  
	0x26, 0x08, //   #  ##     #   
	0x11, 0xF0, //    #   #####    
	0x08, 0x00, //     #           

	// @368 'A' (11 pixels wide)
	0x08, 0x00, //     #           
	0x08, 0x00, //     #           
	0x0E, 0x00, //     ###         
	0x09, 0xC0, //     #  ###      
	0x01, 0x38, //        #  ###   
	0x01, 0x06, //        #     ## 
	0x01, 0x38, //        #  ###   
	0x09, 0xC0, //     #  ###      
	0x0E, 0x00, //     ###         
	0x08, 0x00, //     #           
	0x08, 0x00, //     #           

	// @390 'B' (9 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x08, 0x64, //     #    ##  #  
	0x04, 0x98, //      #  #  ##   
	0x03, 0x00, //       ##        

	// @408 'C' (9 pixels wide)
	0x01, 0xF0, //        #####    
	0x02, 0x08, //       #     #   
	0x04, 0x04, //      #       #  
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x04, 0x04, //      #       #  
	0x02, 0x1E, //       #    #### 

	// @426 'D' (10 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x04, 0x04, //      #       #  
	0x02, 0x08, //       #     #   
	0x01, 0xF0, //        #####    

	// @446 'E' (9 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x08, 0xE2, //     #   ###   # 
	0x0C, 0x06, //     ##       ## 
	0x02, 0x00, //       #         

	// @464 'F' (8 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x00, 0x42, //          #    # 
	0x00, 0xE2, //         ###   # 
	0x00, 0x06, //              ## 

	// @480 'G' (10 pixels wide)
	0x01, 0xF0, //        #####    
	0x02, 0x08, //       #     #   
	0x04, 0x04, //      #       #  
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x42, //     #    #    # 
	0x08, 0x44, //     #    #   #  
	0x07, 0xCE, //      #####  ### 
	0x00, 0x40, //          #      

	// @500 'H' (11 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x00, 0x40, //          #      
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 

	// @522 'I' (5 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 

	// @532 'J' (6 pixels wide)
	0x0C, 0x00, //     ##          
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x07, 0xFE, //      ########## 
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 

	// @544 'K' (11 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x00, 0xA0, //         # #     
	0x01, 0x12, //        #   #  # 
	0x0A, 0x0A, //     # #     # # 
	0x0C, 0x06, //     ##       ## 
	0x08, 0x02, //     #         # 
	0x08, 0x00, //     #           

	// @566 'L' (9 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x00, //     #           
	0x08, 0x00, //     #           
	0x0C, 0x00, //     ##          
	0x02, 0x00, //       #         

	// @584 'M' (14 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x0C, //     #       ##  
	0x08, 0x30, //     #     ##    
	0x01, 0xC0, //        ###      
	0x02, 0x00, //       #         
	0x0E, 0x00, //     ###         
	0x01, 0x80, //        ##       
	0x08, 0x70, //     #    ###    
	0x08, 0x0C, //     #       ##  
	0x0F, 0xFE, //     ########### 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 

	// @612 'N' (12 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x08, //     #       #   
	0x08, 0x10, //     #      #    
	0x00, 0x20, //           #     
	0x00, 0xC0, //         ##      
	0x01, 0x02, //        #      # 
	0x02, 0x02, //       #       # 
	0x0F, 0xFE, //     ########### 
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 

	// @636 'O' (10 pixels wide)
	0x01, 0xF0, //        #####    
	0x02, 0x08, //       #     #   
	0x04, 0x04, //      #       #  
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x04, 0x04, //      #       #  
	0x02, 0x08, //       #     #   
	0x01, 0xF0, //        #####    

	// @656 'P' (8 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x82, //     #   #     # 
	0x08, 0x82, //     #   #     # 
	0x00, 0x82, //         #     # 
	0x00, 0x44, //          #   #  
	0x00, 0x38, //           ###   

	// @672 'Q' (10 pixels wide)
	0x01, 0xF0, //        #####    
	0x02, 0x08, //       #     #   
	0x04, 0x04, //      #       #  
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x18, 0x02, //    ##         # 
	0x28, 0x02, //   # #         # 
	0x24, 0x04, //   #  #       #  
	0x42, 0x08, //  #    #     #   
	0x41, 0xF0, //  #     #####    

	// @692 'R' (10 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x00, 0xC2, //         ##    # 
	0x03, 0x24, //       ##  #  #  
	0x04, 0x18, //      #     ##   
	0x08, 0x00, //     #           
	0x08, 0x00, //     #           

	// @712 'S' (7 pixels wide)
	0x0E, 0x18, //     ###    ##   
	0x04, 0x24, //      #    #  #  
	0x08, 0x22, //     #     #   # 
	0x08, 0x42, //     #    #    # 
	0x08, 0x42, //     #    #    # 
	0x04, 0x84, //      #  #    #  
	0x03, 0x0E, //       ##    ### 

	// @726 'T' (9 pixels wide)
	0x00, 0x0E, //             ### 
	0x00, 0x02, //               # 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0F, 0xFE, //     ########### 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x00, 0x02, //               # 
	0x00, 0x0E, //             ### 

	// @744 'U' (11 pixels wide)
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 
	0x03, 0xFE, //       ######### 
	0x04, 0x02, //      #        # 
	0x08, 0x02, //     #         # 
	0x08, 0x00, //     #           
	0x08, 0x02, //     #         # 
	0x04, 0x02, //      #        # 
	0x03, 0xFE, //       ######### 
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 

	// @766 'V' (11 pixels wide)
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 
	0x00, 0x1E, //            #### 
	0x00, 0xE2, //         ###   # 
	0x07, 0x00, //      ###        
	0x08, 0x00, //     #           
	0x07, 0x00, //      ###        
	0x00, 0xE2, //         ###   # 
	0x00, 0x1E, //            #### 
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 

	// @788 'W' (15 pixels wide)
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 
	0x00, 0x0E, //             ### 
	0x00, 0x72, //          ###  # 
	0x03, 0x80, //       ###       
	0x0C, 0x02, //     ##        # 
	0x03, 0x82, //       ###     # 
	0x00, 0x5E, //          # #### 
	0x00, 0xE2, //         ###   # 
	0x03, 0x00, //       ##        
	0x0C, 0x00, //     ##          
	0x03, 0xE2, //       #####   # 
	0x00, 0x1E, //            #### 
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 

	// @818 'X' (11 pixels wide)
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 
	0x0C, 0x06, //     ##       ## 
	0x0A, 0x0A, //     # #     # # 
	0x01, 0xB2, //        ## ##  # 
	0x00, 0x40, //          #      
	0x01, 0xB0, //        ## ##    
	0x0A, 0x0A, //     # #     # # 
	0x0C, 0x06, //     ##       ## 
	0x08, 0x02, //     #         # 
	0x08, 0x02, //     #         # 

	// @840 'Y' (10 pixels wide)
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 
	0x08, 0x0E, //     #       ### 
	0x08, 0x32, //     #     ##  # 
	0x0F, 0xC0, //     ######      
	0x08, 0x20, //     #     #     
	0x08, 0x1A, //     #      ## # 
	0x00, 0x06, //              ## 
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 

	// @860 'Z' (9 pixels wide)
	0x08, 0x00, //     #           
	0x0E, 0x0E, //     ###     ### 
	0x09, 0x02, //     #  #      # 
	0x08, 0x82, //     #   #     # 
	0x08, 0x62, //     #    ##   # 
	0x08, 0x12, //     #      #  # 
	0x08, 0x0E, //     #       ### 
	0x0C, 0x02, //     ##        # 
	0x02, 0x00, //       #         

	// @878 '[' (3 pixels wide)
	0x7F, 0xFE, //  ############## 
	0x40, 0x02, //  #            # 
	0x40, 0x02, //  #            # 

	// @884 '\' (4 pixels wide)
	0x00, 0x06, //              ## 
	0x00, 0x78, //          ####   
	0x03, 0x80, //       ###       
	0x0C, 0x00, //     ##          

	// @892 ']' (3 pixels wide)
	0x40, 0x02, //  #            # 
	0x40, 0x02, //  #            # 
	0x7F, 0xFE, //  ############## 

	// @898 '^' (8 pixels wide)
	0x00, 0x40, //          #      
	0x00, 0x30, //           ##    
	0x00, 0x0C, //             ##  
	0x00, 0x02, //               # 
	0x00, 0x02, //               # 
	0x00, 0x0C, //             ##  
	0x00, 0x30, //           ##    
	0x00, 0x40, //          #      

	// @914 '_' (8 pixels wide)
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              

	// @930 '`' (2 pixels wide)
	0x00, 0x02, //               # 
	0x00, 0x0C, //             ##  

	// @934 'a' (6 pixels wide)
	0x0E, 0x40, //     ###  #      
	0x09, 0x20, //     #  #  #     
	0x09, 0x20, //     #  #  #     
	0x04, 0xA0, //      #  # #     
	0x0F, 0xC0, //     ######      
	0x08, 0x00, //     #           

	// @946 'b' (7 pixels wide)
	0x00, 0x04, //              #  
	0x07, 0xFE, //      ########## 
	0x08, 0x40, //     #    #      
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x04, 0x40, //      #   #      
	0x03, 0x80, //       ###       

	// @960 'c' (5 pixels wide)
	0x07, 0xC0, //      #####      
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x04, 0x40, //      #   #      

	// @970 'd' (7 pixels wide)
	0x03, 0x80, //       ###       
	0x04, 0x40, //      #   #      
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x04, 0x44, //      #   #   #  
	0x0F, 0xFE, //     ########### 
	0x04, 0x00, //      #          

	// @984 'e' (5 pixels wide)
	0x07, 0xC0, //      #####      
	0x08, 0xA0, //     #   # #     
	0x08, 0xA0, //     #   # #     
	0x08, 0xA0, //     #   # #     
	0x04, 0xC0, //      #  ##      

	// @994 'f' (6 pixels wide)
	0x08, 0x20, //     #     #     
	0x0F, 0xFC, //     ##########  
	0x08, 0x22, //     #     #   # 
	0x08, 0x22, //     #     #   # 
	0x00, 0x02, //               # 
	0x00, 0x04, //              #  

	// @1006 'g' (7 pixels wide)
	0x30, 0x00, //   ##            
	0x4D, 0xC0, //  #  ## ###      
	0x4A, 0x20, //  #  # #   #     
	0x4A, 0x20, //  #  # #   #     
	0x4A, 0x20, //  #  # #   #     
	0x49, 0xE0, //  #  #  ####     
	0x30, 0x20, //   ##      #     

	// @1020 'h' (7 pixels wide)
	0x08, 0x04, //     #        #  
	0x0F, 0xFE, //     ########### 
	0x08, 0x40, //     #    #      
	0x00, 0x20, //           #     
	0x08, 0x20, //     #     #     
	0x0F, 0xC0, //     ######      
	0x08, 0x00, //     #           

	// @1034 'i' (3 pixels wide)
	0x08, 0x40, //     #    #      
	0x0F, 0xE2, //     #######   # 
	0x08, 0x00, //     #           

	// @1040 'j' (4 pixels wide)
	0x40, 0x00, //  #              
	0x40, 0x00, //  #              
	0x40, 0x40, //  #       #      
	0x3F, 0xE2, //   #########   # 

	// @1048 'k' (8 pixels wide)
	0x08, 0x04, //     #        #  
	0x0F, 0xFE, //     ########### 
	0x09, 0x00, //     #  #        
	0x01, 0x80, //        ##       
	0x06, 0x60, //      ##  ##     
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x08, 0x00, //     #           

	// @1064 'l' (3 pixels wide)
	0x08, 0x04, //     #        #  
	0x0F, 0xFE, //     ########### 
	0x08, 0x00, //     #           

	// @1070 'm' (11 pixels wide)
	0x08, 0x40, //     #    #      
	0x0F, 0xE0, //     #######     
	0x08, 0x40, //     #    #      
	0x00, 0x20, //           #     
	0x08, 0x20, //     #     #     
	0x0F, 0xC0, //     ######      
	0x08, 0x40, //     #    #      
	0x00, 0x20, //           #     
	0x08, 0x20, //     #     #     
	0x0F, 0xC0, //     ######      
	0x08, 0x00, //     #           

	// @1092 'n' (7 pixels wide)
	0x08, 0x40, //     #    #      
	0x0F, 0xE0, //     #######     
	0x08, 0x40, //     #    #      
	0x00, 0x20, //           #     
	0x08, 0x20, //     #     #     
	0x0F, 0xC0, //     ######      
	0x08, 0x00, //     #           

	// @1106 'o' (6 pixels wide)
	0x03, 0x80, //       ###       
	0x04, 0x40, //      #   #      
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x04, 0x40, //      #   #      
	0x03, 0x80, //       ###       

	// @1118 'p' (7 pixels wide)
	0x40, 0x40, //  #       #      
	0x7F, 0xE0, //  ##########     
	0x44, 0x40, //  #   #   #      
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x04, 0x40, //      #   #      
	0x03, 0x80, //       ###       

	// @1132 'q' (7 pixels wide)
	0x07, 0x80, //      ####       
	0x08, 0x40, //     #    #      
	0x08, 0x20, //     #     #     
	0x08, 0x20, //     #     #     
	0x44, 0x40, //  #   #   #      
	0x7F, 0xE0, //  ##########     
	0x40, 0x00, //  #              

	// @1146 'r' (5 pixels wide)
	0x08, 0x40, //     #    #      
	0x0F, 0xE0, //     #######     
	0x08, 0x40, //     #    #      
	0x00, 0x20, //           #     
	0x00, 0x20, //           #     

	// @1156 's' (4 pixels wide)
	0x0C, 0xC0, //     ##  ##      
	0x09, 0x20, //     #  #  #     
	0x09, 0x20, //     #  #  #     
	0x06, 0x60, //      ##  ##     

	// @1164 't' (4 pixels wide)
	0x00, 0x20, //           #     
	0x0F, 0xF8, //     #########   
	0x08, 0x20, //     #     #     
	0x04, 0x20, //      #    #     

	// @1172 'u' (7 pixels wide)
	0x00, 0x20, //           #     
	0x07, 0xE0, //      ######     
	0x08, 0x00, //     #           
	0x08, 0x00, //     #           
	0x04, 0x20, //      #    #     
	0x0F, 0xE0, //     #######     
	0x04, 0x00, //      #          

	// @1186 'v' (7 pixels wide)
	0x00, 0x20, //           #     
	0x00, 0xE0, //         ###     
	0x07, 0x20, //      ###  #     
	0x08, 0x00, //     #           
	0x07, 0x20, //      ###  #     
	0x00, 0xE0, //         ###     
	0x00, 0x20, //           #     

	// @1200 'w' (11 pixels wide)
	0x00, 0x20, //           #     
	0x00, 0xE0, //         ###     
	0x07, 0x20, //      ###  #     
	0x0C, 0x00, //     ##          
	0x03, 0x20, //       ##  #     
	0x00, 0xE0, //         ###     
	0x07, 0x20, //      ###  #     
	0x0C, 0x00, //     ##          
	0x03, 0x20, //       ##  #     
	0x00, 0xE0, //         ###     
	0x00, 0x20, //           #     

	// @1222 'x' (7 pixels wide)
	0x08, 0x20, //     #     #     
	0x0C, 0x60, //     ##   ##     
	0x0A, 0xA0, //     # # # #     
	0x01, 0x00, //        #        
	0x0A, 0xA0, //     # # # #     
	0x0C, 0x60, //     ##   ##     
	0x08, 0x20, //     #     #     

	// @1236 'y' (7 pixels wide)
	0x40, 0x20, //  #        #     
	0x40, 0xE0, //  #      ###     
	0x23, 0x20, //   #   ##  #     
	0x1C, 0x00, //    ###          
	0x07, 0x20, //      ###  #     
	0x00, 0xE0, //         ###     
	0x00, 0x20, //           #     

	// @1250 'z' (6 pixels wide)
	0x08, 0x00, //     #           
	0x0C, 0x60, //     ##   ##     
	0x0B, 0x20, //     # ##  #     
	0x08, 0xA0, //     #   # #     
	0x08, 0x60, //     #    ##     
	0x0C, 0x20, //     ##    #     

	// @1262 '{' (4 pixels wide)
	0x00, 0x80, //         #       
	0x1F, 0x78, //    ##### ####   
	0x20, 0x04, //   #          #  
	0x40, 0x02, //  #            # 

	// @1270 '|' (1 pixels wide)
	0xFF, 0xFE, // ############### 

	// @1272 '}' (4 pixels wide)
	0x40, 0x02, //  #            # 
	0x20, 0x04, //   #          #  
	0x1F, 0x78, //    ##### ####   
	0x00, 0x80, //         #       

	// @1280 '~' (9 pixels wide)
	0x01, 0x00, //        #        
	0x00, 0x80, //         #       
	0x00, 0x80, //         #       
	0x00, 0x80, //         #       
	0x01, 0x00, //        #        
	0x01, 0x00, //        #        
	0x01, 0x00, //        #        
	0x01, 0x00, //        #        
	0x00, 0x80, //         #       
};

// Character descriptors for Times New Roman 12pt
// { [Char width in bits], [Offset into timesNewRoman12ptCharBitmaps in bytes] }
const FONT_CHAR_INFO timesNewRoman12ptDescriptors[] =
{
	{2, 0}, 		//   
	{1, 4}, 		// ! 
	{3, 6}, 		// " 
	{8, 12}, 		// # 
	{6, 28}, 		// $ 
	{12, 40}, 		// % 
	{11, 64}, 		// & 
	{1, 86}, 		// ' 
	{4, 88}, 		// ( 
	{4, 96}, 		// ) 
	{7, 104}, 		// * 
	{9, 118}, 		// + 
	{2, 136}, 		// , 
	{4, 140}, 		// - 
	{1, 148}, 		// . 
	{4, 150}, 		// / 
	{6, 158}, 		// 0 
	{4, 170}, 		// 1 
	{6, 178}, 		// 2 
	{6, 190}, 		// 3 
	{7, 202}, 		// 4 
	{6, 216}, 		// 5 
	{6, 228}, 		// 6 
	{7, 240}, 		// 7 
	{6, 254}, 		// 8 
	{6, 266}, 		// 9 
	{1, 278}, 		// : 
	{2, 280}, 		// ; 
	{7, 284}, 		// < 
	{9, 298}, 		// = 
	{7, 316}, 		// > 
	{5, 330}, 		// ? 
	{14, 340}, 		// @ 
	{11, 368}, 		// A 
	{9, 390}, 		// B 
	{9, 408}, 		// C 
	{10, 426}, 		// D 
	{9, 446}, 		// E 
	{8, 464}, 		// F 
	{10, 480}, 		// G 
	{11, 500}, 		// H 
	{5, 522}, 		// I 
	{6, 532}, 		// J 
	{11, 544}, 		// K 
	{9, 566}, 		// L 
	{14, 584}, 		// M 
	{12, 612}, 		// N 
	{10, 636}, 		// O 
	{8, 656}, 		// P 
	{10, 672}, 		// Q 
	{10, 692}, 		// R 
	{7, 712}, 		// S 
	{9, 726}, 		// T 
	{11, 744}, 		// U 
	{11, 766}, 		// V 
	{15, 788}, 		// W 
	{11, 818}, 		// X 
	{10, 840}, 		// Y 
	{9, 860}, 		// Z 
	{3, 878}, 		// [ 
	{4, 884}, 		/* \ */
	{3, 892}, 		// ] 
	{8, 898}, 		// ^ 
	{8, 914}, 		// _ 
	{2, 930}, 		// ` 
	{6, 934}, 		// a 
	{7, 946}, 		// b 
	{5, 960}, 		// c 
	{7, 970}, 		// d 
	{5, 984}, 		// e 
	{6, 994}, 		// f 
	{7, 1006}, 		// g 
	{7, 1020}, 		// h 
	{3, 1034}, 		// i 
	{4, 1040}, 		// j 
	{8, 1048}, 		// k 
	{3, 1064}, 		// l 
	{11, 1070}, 		// m 
	{7, 1092}, 		// n 
	{6, 1106}, 		// o 
	{7, 1118}, 		// p 
	{7, 1132}, 		// q 
	{5, 1146}, 		// r 
	{4, 1156}, 		// s 
	{4, 1164}, 		// t 
	{7, 1172}, 		// u 
	{7, 1186}, 		// v 
	{11, 1200}, 		// w 
	{7, 1222}, 		// x 
	{7, 1236}, 		// y 
	{6, 1250}, 		// z 
	{4, 1262}, 		// { 
	{1, 1270}, 		// | 
	{4, 1272}, 		// } 
	{9, 1280}, 		// ~ 
};

// Font information for Times New Roman 12pt
const FONT_INFO timesNewRoman12ptFontInfo =
{
	14,   //  Character height
	2,    //  Character height in bytes
	' ',  //  Start character
	'~',  //  End character
    2,    //  Width, in pixels, of space character
	timesNewRoman12ptDescriptors, //  Character decriptor array
	timesNewRoman12ptBitmaps, //  Character bitmap array
};
