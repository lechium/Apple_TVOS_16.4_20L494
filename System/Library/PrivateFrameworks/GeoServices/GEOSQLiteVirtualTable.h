//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOSQLiteVirtualTable : NSObject
{
    NSString *_name;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000013b5080
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)fetchValueForContext:(struct sqlite3_context *)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;	// IMP=0x00000000013b505d
@property(readonly, nonatomic) unsigned long long rowCount;
@property(readonly, nonatomic) NSString *columnDefinitions;
@property(readonly, nonatomic) struct sqlite3_module *module;
- (id)initWithName:(id)arg1;	// IMP=0x00000000013b4fb1
- (id)init;	// IMP=0x00000000013b4f87

@end

