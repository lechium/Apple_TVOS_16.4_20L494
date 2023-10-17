//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PersistentStoreConfiguration : NSObject
{
    NSString *_databaseFileName;	// 8 = 0x8
    NSArray *_legacyModelVersionIdentifiers;	// 16 = 0x10
    NSString *_modelFileName;	// 24 = 0x18
    int _storeType;	// 32 = 0x20
}

@property(nonatomic) int storeType; // @synthesize storeType=_storeType;
@property(retain, nonatomic) NSString *modelFileName; // @synthesize modelFileName=_modelFileName;
@property(copy, nonatomic) NSArray *legacyModelVersionIdentifiers; // @synthesize legacyModelVersionIdentifiers=_legacyModelVersionIdentifiers;
@property(retain, nonatomic) NSString *databaseFileName; // @synthesize databaseFileName=_databaseFileName;
@property(readonly, nonatomic) NSString *integrityCookieFileName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000088f56
- (void)dealloc;	// IMP=0x0010000000088f05
- (id)initWithStoreType:(int)arg1;	// IMP=0x0010000000088d4a

@end
