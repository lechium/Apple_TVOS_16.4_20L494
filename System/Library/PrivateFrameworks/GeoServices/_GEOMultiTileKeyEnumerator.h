//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMultiTileKeyEnumerator : NSObject
{
    NSArray *_enumerators;	// 8 = 0x8
    unsigned int _currentEnumeratorIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000124273d
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)continueEnumeratingTileKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000001242401
- (id)initWithEnumerators:(id)arg1;	// IMP=0x0000000001242370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

