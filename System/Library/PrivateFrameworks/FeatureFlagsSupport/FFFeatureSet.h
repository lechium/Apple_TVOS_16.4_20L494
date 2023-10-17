//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FFFeatureSetIdentifier, NSArray;

__attribute__((visibility("hidden")))
@interface FFFeatureSet : NSObject
{
    FFFeatureSetIdentifier *_identifier;	// 8 = 0x8
    NSArray *_features;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000031da
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(readonly, nonatomic) FFFeatureSetIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000314a
- (id)initWithGroup:(id)arg1 set:(id)arg2;	// IMP=0x00000000000030b3

@end

