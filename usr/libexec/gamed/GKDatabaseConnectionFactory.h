//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKDatabaseConnectionFactory : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
}

+ (id)factoryWithDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x004000000011e812
+ (id)pathForDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x001000000011e74e
+ (id)directoryForEnvironment:(long long)arg1;	// IMP=0x001000000011e72a
- (void).cxx_destruct;	// IMP=0x002000000011e95c
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)connectionForWriterWithName:(id)arg1;	// IMP=0x001000000011e93b
- (id)connectionForReaderWithName:(id)arg1;	// IMP=0x001000000011e933
- (id)initWithPath:(id)arg1;	// IMP=0x001000000011e8cb

@end
