//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteConnectionOptions : NSObject
{
    _Bool _readOnly;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    long long _cacheSize;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d5405
- (void).cxx_destruct;	// IMP=0x00000000000d53f5
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d532c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d5264
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d51e6
- (int)applyToDatabase:(struct sqlite3 *)arg1;	// IMP=0x00000000000d5105
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;	// IMP=0x00000000000d50f0
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;	// IMP=0x00000000000d50de
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00000000000d5051

@end

