wglCopyContext           (HGLRC, HGLRC, UINT)
wglCreateContext         (HDC)
wglCreateLayerContext    (HDC, int)
wglDeleteContext         (HGLRC)
wglGetCurrentContext     (VOID)
wglGetCurrentDC          (VOID)
wglGetProcAddress        (LPCSTR)
wglMakeCurrent           (HDC, HGLRC)
wglShareLists            (HGLRC, HGLRC)
wglUseFontBitmaps        (HDC, DWORD, DWORD, DWORD)
SwapBuffers              (HDC)
wglUseFontOutlines       (HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT)
wglDescribeLayerPlane    (HDC, int, int, UINT, LPLAYERPLANEDESCRIPTOR)
wglSetLayerPaletteEntries(HDC, int, int, int, CONST COLORREF *)
wglGetLayerPaletteEntries(HDC, int, int, int, COLORREF *)
wglRealizeLayerPalette   (HDC, int, BOOL)
wglSwapLayerBuffers      (HDC, UINT)
wglSwapMultipleBuffers   (UINT, CONST WGLSWAP*)
