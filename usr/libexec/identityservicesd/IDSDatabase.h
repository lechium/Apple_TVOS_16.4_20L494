//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSDatabase : NSObject
{
    unsigned int _dataProtectionClass;	// 8 = 0x8
    NSString *_filename;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000703f20
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (void)deleteDatabase;	// IMP=0x0010000000703e10
- (void)ensureDatabaseIsInitialized;	// IMP=0x0010000000703b80
- (id)initWithDataProtectionClass:(unsigned int)arg1 filename:(id)arg2;	// IMP=0x0010000000703aa0
- (id)initWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000703a40
- (id)init;	// IMP=0x00100000007039e0

@end

