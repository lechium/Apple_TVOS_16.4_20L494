//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSData, NSString;

@interface NSArray (FezAdditions)
- (id)__imMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0030000000006454
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;	// IMP=0x0030000000006177
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0030000000005eee
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0030000000005c91
- (void)__imForEach:(CDUnknownBlockType)arg1;	// IMP=0x0030000000005bbc
- (_Bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x0030000000005b91
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x0030000000005ab7
- (_Bool)containsObjectIdenticalTo:(id)arg1;	// IMP=0x0030000000005a94
- (id)__imFirstObject;	// IMP=0x0030000000005a4d
- (id)_copyForEnumerating;	// IMP=0x0030000000005a19
- (_Bool)_hasSameMembers:(id)arg1;	// IMP=0x0030000000005954
- (id)__imDeepCopy;	// IMP=0x00300000000058d5
- (_Bool)__imIsMutable;	// IMP=0x00300000000058ac
- (id)__imSetFromArray;	// IMP=0x0030000000005860
- (id)__IMStripPotentialTokenURIs;	// IMP=0x00300000000057d7
@property(readonly, nonatomic) NSString *SHA256HexString;
@property(readonly, nonatomic) NSData *SHA256Data;
- (void)_SHA256Bytes:(char *)arg1;	// IMP=0x0030000000015ee5
@end

