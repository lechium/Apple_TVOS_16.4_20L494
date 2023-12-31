//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (LibAppStoreDaemon)
- (double)lib_timeElapsedUntilNow;	// IMP=0x002000000004aa4f
- (double)lib_secondsFromNow;	// IMP=0x001000000004aa3d
- (id)lib_simpleWeekDate;	// IMP=0x001000000004a962
- (id)lib_loggableShortDate;	// IMP=0x001000000004a887
- (id)lib_loggableDate;	// IMP=0x001000000004a81d
- (_Bool)lib_isBefore:(id)arg1;	// IMP=0x001000000004a7ff
- (_Bool)lib_dateHasPassed;	// IMP=0x001000000004a7e1
@property(readonly, copy) NSString *lib_rfc3339String;
@property(readonly) unsigned long long lib_dispatchTime;
@end

