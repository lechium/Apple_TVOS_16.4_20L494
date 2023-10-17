//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (CPLArchiver)
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;	// IMP=0x005000000007adb9
+ (id)cplAllPropertyNames;	// IMP=0x00500000000f0963
+ (void)cplDumpProperties;	// IMP=0x00500000000f089e
+ (id)_cplPropertyAttributeMap;	// IMP=0x00500000000f07c0
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;	// IMP=0x00500000000efb21
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;	// IMP=0x00500000000efb19
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;	// IMP=0x00500000000efabb
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;	// IMP=0x00500000000efab3
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x0010000000078e28
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x0010000000078d78
- (id)storedClassNameForCPLArchiver:(id)arg1;	// IMP=0x0010000000078d5e
- (unsigned long long)cplSpecialHash;	// IMP=0x00100000000ec2f1
- (_Bool)cplSpecialIsEqual:(id)arg1;	// IMP=0x00100000000ec2df
- (id)cplFullDescription;	// IMP=0x00100000000ec2c3
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ec2b1
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ec297
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ebebe
- (void)cplClearProperties:(id)arg1;	// IMP=0x00100000000ebc9f
- (unsigned long long)cplHash;	// IMP=0x00100000000ebbab
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ebb93
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 diffTracker:(id)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000eb966
- (_Bool)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eb94c
- (_Bool)cplIsEqual:(id)arg1;	// IMP=0x00100000000eb938
- (void)cplDecodePropertiesFromCoder:(id)arg1;	// IMP=0x00100000000eb875
- (void)cplEncodePropertiesWithCoder:(id)arg1;	// IMP=0x00100000000eb7b2
- (id)cplDeepCopy;	// IMP=0x00100000000eb76c
@end
