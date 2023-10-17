//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSOrderedSet;

@interface SWCDatabaseStorage : NSObject
{
    long long _databaseVersion;	// 8 = 0x8
    NSOrderedSet *_entries;	// 16 = 0x10
    NSDictionary *_settings;	// 24 = 0x18
    NSNumber *_launchServicesDatabaseGeneration;	// 32 = 0x20
    NSData *_enterpriseState;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000137f4
- (void).cxx_destruct;	// IMP=0x0020000000014290
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(copy) NSDictionary *settings; // @synthesize settings=_settings;
@property(copy) NSOrderedSet *entries; // @synthesize entries=_entries;
@property long long databaseVersion; // @synthesize databaseVersion=_databaseVersion;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000138a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000137fc

@end

