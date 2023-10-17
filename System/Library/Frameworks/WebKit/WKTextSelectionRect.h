//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface WKTextSelectionRect : UITextSelectionRect
{
    struct SelectionGeometry _selectionGeometry;	// 8 = 0x8
    double _scaleFactor;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x00000000003773d9
- (_Bool)isVertical;	// IMP=0x00000000003773c4
- (_Bool)containsEnd;	// IMP=0x00000000003773b3
- (_Bool)containsStart;	// IMP=0x00000000003773a2
- (id)range;	// IMP=0x000000000037739a
- (long long)writingDirection;	// IMP=0x0000000000377388
- (struct CGRect)rect;	// IMP=0x0000000000377350
- (id)_customHandleInfo;	// IMP=0x00000000003772c6
- (id)_path;	// IMP=0x0000000000377189
- (id)initWithSelectionGeometry:(const void *)arg1 scaleFactor:(double)arg2;	// IMP=0x0000000000377101
- (id)initWithCGRect:(struct CGRect)arg1;	// IMP=0x0000000000377083

@end
