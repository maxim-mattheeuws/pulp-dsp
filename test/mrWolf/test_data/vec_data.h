#ifndef __DOT_PROD_H_32__
#define __DOT_PROD_H_32__

#define LENGTH 1000

typedef int32_t v_type;
int32_t result = 0;

RT_LOCAL_DATA int32_t v_a[LENGTH] = {
-118, -115, -52, 180, 400, -71, 281, 238, 119, 216, 181, -10, 205, -105, 232, -90, 354, 343, 193, 136, 57, 431, 420, 204, 84, 187, 397, 194, 341, -47, 15, 351, 11, -38, 270, 414, 191, 330, -95, 93, 37, 271, 129, 151, 31, 242, -2, 424, 196, 39, 22, 31, 55, 33, 55, 23, 156, -117, 81, 299, -51, 97, 91, 179, -122, 113, 2, 21, 247, 12, 11, 163, 432, 152, 60, 128, 89, -26, 254, -15, 341, 21, 34, 159, -37, 191, -100, -91, 416, -116, 428, 249, -25, 11, 367, 368, 140, -107, -25, -45, -95, 65, -79, 331, 399, 443, 7, -78, 254, 322, 16, 324, 157, 409, 320, 34, -102, 129, 105, 249, -33, 315, 240, -63, 72, 10, 270, -118, 407, 441, -32, 306, -42, -107, -91, 137, 61, 163, 126, 363, 165, -17, 159, 122, 93, -90, 134, -108, 288, -37, 54, 40, 346, 111, 283, 232, 161, 175, 341, 446, 395, 212, 144, 265, 283, -83, 143, -51, 179, -101, 116, 105, 129, 133, 55, -15, -103, 409, 217, -64, 216, 310, 79, 320, 109, -61, 442, 97, 283, 52, 188, 222, 307, 308, 4, -93, 375, 172, 107, 2, 212, 395, 345, -50, 339, 216, 410, 339, 399, 191, 116, 419, 376, 318, -93, 148, -68, 152, 168, 291, 390, 227, -42, 401, 335, 156, 29, -106, -79, 388, -14, 252, 350, 277, 286, 106, 286, 404, 170, 8, 151, 2, 77, 431, 99, 344, 163, 444, 384, 443, 338, 398, 50, 91, 448, -119, 201, 2, 387, 394, 365, 448, 427, 297, 306, -24, 201, 14, -42, 314, 91, 219, -79, 48, 67, 408, -68, 145, 112, 180, 303, 233, 133, -108, 64, 344, 366, 79, 213, -71, 352, 128, 382, 37, -32, 11, 168, 393, 70, 383, 17, 230, 426, 280, 401, 90, -19, -14, 265, 227, 381, 402, 31, 44, 99, 298, 317, 265, 271, 434, 401, 106, 313, 365, -120, 286, 239, 225, 314, 311, 302, 359, 380, 32, 417, 314, 352, 137, 106, 179, 189, -23, -106, 50, 42, 213, 122, 256, -89, -88, 55, 1, 412, 290, 36, 4, 79, 313, -61, 352, 192, 274, 136, 8, 32, 311, -65, -39, 426, -17, -72, 27, -63, 325, 290, 280, 15, 233, 80, 35, 387, 70, 111, 218, 208, 455, -68, 169, -3, 318, -18, 62, 213, 371, 24, 443, 215, 57, 179, 175, -49, 209, 438, 312, -4, -108, -59, 335, 129, 281, 14, 66, -71, 181, 379, 273, 287, 279, -10, -110, -67, 194, -1, 6, 365, 440, -94, 156, 435, 23, 407, 183, 154, 248, -74, 207, -12, 143, -28, -49, 453, -86, 23, -28, 183, 366, 422, -67, -59, 339, 171, 175, 421, 384, 118, 199, 388, 367, -30, 20, -22, -20, 449, 33, 242, -116, -16, 54, 287, 224, 57, -89, -107, 328, 130, 268, 147, 79, -87, 62, 297, -1, 255, 345, 413, -50, 295, -87, 256, -21, -37, 436, 261, -53, 433, 1, 360, 429, 322, 254, -88, -103, 264, 413, 44, -51, -77, 154, 214, 180, 22, 378, -47, 58, 196, -14, 448, 44, -85, 213, 47, 342, 389, 99, -80, 82, 375, 254, -63, 337, 155, -22, 289, 25, 193, 46, -94, 316, 18, 400, 169, -66, 131, 189, 283, 43, 137, 68, 378, -67, 446, 68, 268, 324, 144, -35, 342, -73, 191, -24, -120, 448, 426, 383, 57, 336, 53, 43, -51, 39, -108, 298, 28, 368, 302, 140, 250, 311, 60, -56, 161, 279, 366, -35, 170, 354, 229, 382, -97, 190, 351, 351, 401, 196, 165, 167, 306, 27, 9, 227, 408, -74, 405, -71, 199, 163, 56, 399, 337, 130, 213, 262, -110, 270, 193, -65, 99, -88, 308, -9, -62, 51, -58, 260, 133, 195, 452, 454, 425, 129, 77, 346, 147, 219, 125, 373, -75, 178, 76, 203, 232, 56, 386, 263, 123, -91, 48, 44, 402, 160, -25, 312, 435, 291, 367, -119, 266, 358, -27, 288, 385, 371, -7, 338, 164, -87, -8, 367, 390, 190, 98, 228, 212, 144, -12, 239, 64, -93, 32, 311, 350, -97, 287, 37, 226, 166, 381, 155, 257, 361, -87, -95, 124, 375, 450, 196, 291, 245, 364, 67, -46, 452, -12, 235, 274, 95, 288, 236, 17, 387, 105, -68, 293, -67, 228, -112, 311, -107, 443, 159, -58, 401, 316, -64, 208, 427, 301, 402, 142, 282, -62, -91, 444, 62, 404, 111, -123, 224, 409, 338, 6, 87, 261, 153, 429, 252, 20, -91, 178, -79, 110, -25, 268, 72, 284, 190, 35, 280, 98, 95, 60, -88, 414, -32, 362, 41, -8, 335, 322, -72, 74, 454, -114, 103, 347, 197, 203, -89, 370, 10, -56, 106, 356, 231, 382, 183, 450, 372, -38, -17, -60, 361, 87, 229, 278, 28, 241, 23, 101, 297, 193, 174, -1, -31, 344, 152, 445, 144, -51, -120, -91, 137, 326, 399, 16, 432, 374, -119, -37, 379, 174, 238, 288, 275, -26, 417, 439, 118, 276, 244, 428, 153, 221, 377, -99, 116, 353, 299, 173, 328, 214, 172, 270, 315, 24, 65, 202, -24, 260, 77, 280, 237, 58, 243, -79, -106, 14, 268, 391, 410, 69, 82, -68, 140, -12, 16, 448, 89, 7, 88, -46, 32, 58, 230, 273, 251, 299, 3, 446, -21, -49, -99, 316, 104, 229, 62, 169, -106, 54, 216, 52, 262, 233, 303, 230, 319, 237, 224, 90, 316, 138, 142, -107, -100, 365, 297, 97, 197, 185, 87, 220, 100, 291, 108, 236, -118, 170, 301, 91, 137, 374, 235, 313, -109, -7, 446, 129, 54, 127, 330, -115, 42, -49, 314, 325, 293, 201, 312, 130, -5, 388, 175, 22, 354, 315, 252, 214, 310, 226, 267, -70, -80, 178, -16, 123, 204, -13, 191, 34, 436, 266, 285, 245, 86, 128, 204, 159, 417, -112, 334, 379, -44, 276, 189, 416, -97, -31, 305, -21, 303, -11, -36, -17, -21, -6, 43, 393, -33, -89, 211, 315, 381, -36, 316, 147, 14, 108, -92, 136, 182, 
};

RT_LOCAL_DATA int32_t v_b[LENGTH] = {
272, 391, 300, -52, 403, 59, 223, -82, 416, 130, -38, 69, 279, 427, 395, -114, 81, 272, 68, -54, 124, 218, 307, 374, 282, -34, -2, 273, 332, 299, 127, 72, -38, 445, 328, 394, 44, 381, 87, -110, 119, 285, -15, -24, 133, 58, 379, -11, 97, -62, -98, 258, 68, 270, 31, 146, 341, 120, 382, 0, 74, 258, 283, 147, 419, 35, 438, 395, 67, 76, 362, -53, -49, 36, 391, 129, 440, 34, 138, 360, -68, 87, -97, -52, 378, 359, -1, 102, 322, 59, 153, 15, 192, 138, 391, 289, 13, -73, 256, 295, 150, 223, -80, 149, 307, 307, 180, 53, 153, 101, 78, 382, 148, -113, 284, 316, -69, -72, 26, 78, 361, 332, 274, -64, 160, 142, 378, 426, 420, 374, 309, -42, 426, 246, 244, -23, 93, 56, 355, 69, -39, 267, 328, 335, 142, 71, 186, 225, 166, 130, 39, 423, 249, -21, 30, 272, 345, 75, 427, 173, 154, 226, 299, 325, 342, 111, 344, 122, 202, 202, 42, 32, 404, 283, 8, 339, -47, 434, -55, 46, 427, 290, -62, 201, -83, 313, 434, 81, -105, 177, 99, 238, 347, 333, 241, 85, 139, 425, 189, 349, -73, 299, -100, 455, -92, 275, 289, 87, 82, 167, -8, 451, 294, 186, 4, 340, 411, 361, 353, 227, 18, -63, -26, -46, -84, -35, 401, 359, 426, 179, 73, 219, 384, 110, 82, 238, 328, 186, -10, 117, 437, -117, 169, 43, 73, 31, 305, 403, 208, -24, -38, 260, 307, 455, 435, 30, 338, 26, 88, -104, 323, 104, 26, 383, -60, 333, 8, 88, 403, 209, 387, 27, 182, 398, 234, 338, -55, -100, 432, 367, -21, 348, 385, 339, 450, 309, 163, 13, -108, -92, 149, 108, 111, 352, 409, 40, 243, 165, 172, 438, 347, 126, 310, -80, -24, 217, 295, 442, 216, 386, -24, 423, 398, 379, 193, 124, 283, 204, 147, -92, 63, -92, 63, 201, 280, -119, -53, 16, 434, 41, 180, -66, -116, -123, 294, 271, -82, 455, -89, 15, -96, 168, 335, 314, 324, 237, 259, -45, -84, 198, 74, 157, 444, -83, 287, -23, 395, 161, 357, 301, 67, 88, 168, -19, 148, 374, 70, 268, 48, 37, 53, 160, 377, 5, 99, 365, 317, 280, 367, 234, 297, 349, 71, 350, 125, 92, 356, 417, 61, -32, -46, 255, 420, 151, 181, 62, 61, 388, 449, 397, -76, 4, -21, 362, 216, -51, 424, 439, -12, 108, 398, 184, -55, 369, 449, 205, -56, 177, 360, -92, 194, 37, 314, 277, 265, 141, 95, 68, 416, 451, 189, 45, 254, 156, 34, 135, 149, 151, 203, 87, 192, 20, 171, 321, -92, 11, -45, 343, 191, 87, -67, 229, 133, 322, 11, 403, 23, 298, 172, -23, 226, 240, 31, 40, 120, 28, 337, 297, 267, 313, 299, -8, 163, 178, 192, 95, 393, -77, 365, 365, 41, 181, 433, 140, 6, 196, 452, -27, 403, 71, 249, -28, 356, 358, 318, 412, 65, -35, 380, 99, 62, 301, -59, 87, -99, 100, 215, 293, 384, 304, 36, -37, 21, 192, 210, -76, 354, 324, 270, -107, 19, 428, 170, 38, 415, 38, -7, 177, -59, 24, 239, -84, -103, 262, 340, 222, 288, 182, 454, 157, 219, 411, 445, 37, 448, 349, 268, 182, 20, 390, 358, 320, 173, -57, 340, 139, -1, 215, 145, 319, 435, 110, 181, -8, -76, 60, 113, 200, 4, 384, 11, 261, 97, 437, 222, -51, 158, 380, 207, 210, 327, 310, 244, 241, 276, -47, -26, 234, 93, -58, 119, 359, 113, 367, 182, 45, -63, 29, 262, -24, 88, -97, 100, 289, -106, 269, 44, 380, 296, 324, -109, 421, 299, -88, -105, -50, 439, 227, -82, 5, 350, 58, -45, 232, 394, -120, 224, 364, 326, 255, 203, 5, 69, 207, 267, 443, 118, -35, 292, 146, 332, -24, 9, 56, 200, -59, 209, 309, -71, -59, 393, 342, 117, 264, 213, -119, 140, 237, -31, 187, 333, 172, 431, 321, 433, 383, 98, 53, 418, -68, 96, 425, 14, -49, 454, -96, 24, 398, -60, 191, 79, 26, -83, 56, 387, 354, 266, 313, 399, -73, -6, 283, 148, 417, 332, 118, 67, -62, 147, 168, 437, 455, -122, -98, 268, 31, 106, 54, 304, 337, -33, 359, 338, 9, 318, 138, 113, 434, 432, 58, 334, 371, 153, 67, -4, 238, 259, 261, 455, 372, -71, 280, -102, 64, 48, 370, 366, 301, -6, 148, 428, -7, 322, -49, 273, 420, 22, -28, -14, 419, 355, 277, 271, 279, 122, 347, 246, 69, 190, 276, 33, 298, 349, 50, 132, 284, -43, 148, 262, 233, 280, 183, 425, 120, 448, 196, -85, 199, 126, 367, -81, 55, 240, 123, -111, 421, 70, 300, 305, 429, 361, 230, -35, 15, 74, 152, 286, 433, 92, 250, 122, 53, 334, 194, 409, 190, 149, 27, -97, 183, -78, -34, 439, -19, 319, 53, 434, 374, 257, 438, -52, 172, -85, 339, 347, 175, 130, 242, 323, 241, -119, -111, -27, 2, 85, 46, 2, 342, 414, -40, -76, 384, 276, 299, -34, -104, 71, 143, 33, 256, 26, 403, 145, 196, 250, 196, 263, 119, 377, 330, 128, -122, 90, 101, 74, 413, 263, 421, -50, 127, 224, 168, -95, -47, 141, 183, 163, 451, 250, -86, 188, 144, 66, -114, -98, -74, -60, 101, -22, -86, 137, -16, -42, -27, 310, 42, 0, 151, 44, -27, -21, 356, 206, 33, 336, 288, 439, -53, -52, 70, -105, 29, 37, 132, 148, 336, 51, -4, -17, 234, 99, 31, 210, 165, -40, 233, 99, 88, 341, 166, 394, 176, 365, 88, 166, 304, 209, 344, 66, 302, 22, -62, 280, 401, 427, 216, -70, -37, 435, 113, 141, 73, 189, 193, 168, -110, -28, -96, 176, 355, 273, 389, 155, -70, 115, 318, 284, -96, 125, 65, 442, -107, 231, -115, 153, 175, 60, 215, -119, 308, 237, 153, -92, -44, 218, 242, 177, 142, 52, -55, -24, 391, -92, -32, 40, -94, 131, -78, 435, 371, 
};

int32_t exp_result = 27384787;


#endif
