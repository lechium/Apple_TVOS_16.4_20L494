//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TVPlaybackAdditions)
+ (id)tvp_dateWithMillisecondsSince1970:(id)arg1;	// IMP=0x005000000009b383
+ (_Bool)tvp_networkTimeIsApproximatelyCorrect;	// IMP=0x005000000009b35e
- (_Bool)_isEqualToDateIgnoringTime:(id)arg1;	// IMP=0x001000000009b8ab
- (_Bool)tvp_isYesterday;	// IMP=0x001000000009b82b
- (_Bool)tvp_isTomorrow;	// IMP=0x001000000009b7ab
- (_Bool)tvp_isToday;	// IMP=0x001000000009b751
- (id)tvp_dateBySubtractingDays:(long long)arg1;	// IMP=0x001000000009b73c
- (id)tvp_dateByAddingDays:(long long)arg1;	// IMP=0x001000000009b69c
- (id)tvp_dateCeiledToNearestMinute:(int)arg1;	// IMP=0x001000000009b540
- (id)tvp_dateFlooredToNearestMinute:(int)arg1;	// IMP=0x001000000009b415
@end
