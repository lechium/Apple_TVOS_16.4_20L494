//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLObjectIDSetFetchRequestContext
{
    NSArray *_idSets;	// 224 = 0xe0
    NSString *_columnName;	// 232 = 0xe8
}

- (void)executeEpilogue;	// IMP=0x0000000000296bc0
- (_Bool)executeRequestCore:(id *)arg1;	// IMP=0x0000000000296b29
- (void)dealloc;	// IMP=0x0000000000296abe
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 idSets:(id)arg4 columnName:(id)arg5;	// IMP=0x0000000000296a46

@end
