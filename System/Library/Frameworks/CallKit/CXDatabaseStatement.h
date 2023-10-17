//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXDatabaseStatement : NSObject
{
    struct sqlite3_stmt *_statement;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
}

@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (_Bool)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000054548
- (_Bool)bindText:(const char *)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id *)arg4;	// IMP=0x00000000000543c4
- (_Bool)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id *)arg3;	// IMP=0x0000000000054266
- (_Bool)bind:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000053cc5
- (_Bool)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000053765
- (_Bool)executeWithError:(id *)arg1;	// IMP=0x000000000005374c
- (void)finalize;	// IMP=0x00000000000536ec
- (void)dealloc;	// IMP=0x00000000000536ae
- (id)init;	// IMP=0x00000000000536a0
- (id)initWithSQL:(id)arg1 database:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005346c

@end
