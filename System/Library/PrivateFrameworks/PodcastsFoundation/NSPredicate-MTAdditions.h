//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (MTAdditions)
+ (id)predicateForObjectIds:(id)arg1;	// IMP=0x008000000003ba1c
+ (id)predicateForObjectId:(id)arg1;	// IMP=0x008000000003b9f7
+ (id)predicateForNilValueOrEmptyStringForKey:(id)arg1;	// IMP=0x008000000003b9c4
+ (id)predicateForNilValueForKey:(id)arg1;	// IMP=0x008000000003b99f
+ (id)predicateForNonNilValueForKey:(id)arg1;	// IMP=0x008000000003b97a
+ (id)predicateForDateKey:(id)arg1 isLessThanDate:(id)arg2;	// IMP=0x008000000003b94b
+ (id)predicateForDateKey:(id)arg1 isGreaterThanDate:(id)arg2;	// IMP=0x008000000003b91c
+ (id)predicateForDateKey:(id)arg1 isLessThanOrEqualToDate:(id)arg2;	// IMP=0x008000000003b8ed
+ (id)predicateForDateKey:(id)arg1 isGreaterThanOrEqualToDateKey:(id)arg2;	// IMP=0x008000000003b8be
+ (id)predicateForDateKey:(id)arg1 isGreaterThanOrEqualToDate:(id)arg2;	// IMP=0x008000000003b88f
+ (id)truePredicate;	// IMP=0x008000000003b86d
+ (id)falsePredicate;	// IMP=0x008000000003b84b
- (id)NOT;	// IMP=0x001000000003b82f
- (id)OR:(id)arg1;	// IMP=0x001000000003b767
- (id)AND:(id)arg1;	// IMP=0x001000000003b693
@end
