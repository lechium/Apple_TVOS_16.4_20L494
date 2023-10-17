//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol PQLBindable;

@interface _CPLPrequeliteHasSomethingTodoNow : NSObject
{
    id <PQLBindable> _now;	// 8 = 0x8
    NSData *_sql;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000007a423
@property(readonly, nonatomic) NSData *sql; // @synthesize sql=_sql;
- (id)bindValuesToKeepAlive;	// IMP=0x001000000007a40b
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x001000000007a3b8
- (id)initWithSQL:(id)arg1 now:(id)arg2;	// IMP=0x001000000007a31f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

