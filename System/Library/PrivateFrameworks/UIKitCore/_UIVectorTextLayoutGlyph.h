//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutGlyph : NSObject
{
    unsigned short _glyph;	// 8 = 0x8
    UIBezierPath *_path;	// 16 = 0x10
    struct CGRect _rect;	// 24 = 0x18
    struct CGAffineTransform _pathTransform;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000110f48e
@property(nonatomic) struct CGAffineTransform pathTransform; // @synthesize pathTransform=_pathTransform;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) unsigned short glyph; // @synthesize glyph=_glyph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

