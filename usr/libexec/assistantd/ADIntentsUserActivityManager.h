//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADIntentsUserActivityManager : NSObject
{
    NSMutableDictionary *_userActivitiesStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001bb39a
- (id)description;	// IMP=0x00100000001bb2fe
- (void)reset;	// IMP=0x00100000001bb2e8
- (void)setUserActivity:(id)arg1 forID:(id)arg2;	// IMP=0x00100000001bb25e
- (id)userActivityForID:(id)arg1;	// IMP=0x00100000001bb20e
- (id)init;	// IMP=0x00100000001bb1a3

@end

