//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@interface UIColor (SCNAdditions)
+ (id)scn_colorWithC3DColor:(const struct C3DColor4 *)arg1;	// IMP=0x00500000001692e4
+ (id)color:(double)arg1:(double)arg2:(double)arg3:(double)arg4;	// IMP=0x00500000002bac87
- (struct C3DColor4)scn_C3DColorIgnoringColorSpace:(_Bool)arg1 success:(_Bool *)arg2;	// IMP=0x001000000016932e
- (double)a;	// IMP=0x00100000002bad10
- (double)b;	// IMP=0x00100000002bacec
- (double)g;	// IMP=0x00100000002bacc4
- (double)r;	// IMP=0x00100000002baca0
@end

