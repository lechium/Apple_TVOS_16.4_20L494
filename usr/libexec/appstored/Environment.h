//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;
@protocol OS_dispatch_queue;

@interface Environment : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    SQLiteDatabase *_userDatabase;	// 16 = 0x10
    SQLiteDatabase *_systemDatabase;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000321fe
- (id)init;	// IMP=0x0010000000031df8

@end
