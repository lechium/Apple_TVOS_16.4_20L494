//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHNormalizedDrawingVisualization
{
}

- (void)_drawCutPoints:(id)arg1 inputDrawing:(id)arg2 inContext:(struct CGContext *)arg3 transform:(struct CGAffineTransform)arg4;	// IMP=0x000000000008af70
- (void)drawInputDrawing:(id)arg1 inContext:(struct CGContext *)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x000000000008ac70
- (_Bool)shouldDrawStrokeGroup:(id)arg1;	// IMP=0x000000000008aba0
- (void)_drawGroupBrackgroundInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000008aab0
- (struct CGAffineTransform)_transformForInputDrawingBounds:(struct CGRect)arg1 referenceBounds:(struct CGRect)arg2 viewBounds:(struct CGRect)arg3;	// IMP=0x000000000008a550
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;	// IMP=0x0000000000089fe0
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;	// IMP=0x0000000000089f10
- (_Bool)wantsInputDrawings;	// IMP=0x0000000000089f00
- (long long)layeringPriority;	// IMP=0x0000000000089ef0

@end

