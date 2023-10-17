//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQLiteConnectionOptions : NSObject
{
    _Bool _readOnly;	// 8 = 0x8
    long long _cacheSize;	// 16 = 0x10
    NSString *;	// 24 = 0x18
    NSString *_encryptionKeyId;	// 32 = 0x20
    NSString *_protectionType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000074af0
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSString *protectionType; // @synthesize protectionType=_protectionType;
@property(copy, nonatomic) NSString *encryptionKeyId; // @synthesize encryptionKeyId=_encryptionKeyId;
@property(readonly) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000749df
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;	// IMP=0x00100000000749ca
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;	// IMP=0x00100000000749b8
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x001000000007492b

@end
