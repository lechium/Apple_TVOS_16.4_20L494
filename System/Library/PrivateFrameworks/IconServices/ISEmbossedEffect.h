//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISEmbossedEffect : NSObject
{
    double _range;	// 8 = 0x8
    unsigned long long _variant;	// 16 = 0x10
    struct CGSize _offset;	// 24 = 0x18
}

@property unsigned long long variant; // @synthesize variant=_variant;
@property double range; // @synthesize range=_range;
@property struct CGSize offset; // @synthesize offset=_offset;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;	// IMP=0x0000000000030ff7
- (id)init;	// IMP=0x0000000000030fbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

