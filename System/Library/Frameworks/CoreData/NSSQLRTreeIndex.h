//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLRTreeIndex
{
    NSString *_tableName;	// 48 = 0x30
}

- (id)bulkUpdateStatementsForStore:(id)arg1;	// IMP=0x00000000000a54a4
- (id)dropStatementsForStore:(id)arg1;	// IMP=0x00000000000a546c
- (id)generateStatementsForStore:(id)arg1;	// IMP=0x00000000000a5434
- (void)dealloc;	// IMP=0x00000000000a4b3a
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;	// IMP=0x00000000000a4a8b

@end
