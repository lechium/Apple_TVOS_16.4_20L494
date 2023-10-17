//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimeZone;
@protocol GEOTransitDepartureSequence, GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _MKTransitInactiveLine : NSObject
{
    id <GEOTransitLine> _line;	// 8 = 0x8
    _Bool _blocked;	// 16 = 0x10
    NSDate *_serviceResumesDate;	// 24 = 0x18
    NSTimeZone *_timeZone;	// 32 = 0x20
    NSDate *_referenceDate;	// 40 = 0x28
    id <GEOTransitDepartureSequence> _departuresSequence;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000086f52
@property(readonly, nonatomic) id <GEOTransitDepartureSequence> departuresSequence; // @synthesize departuresSequence=_departuresSequence;
@property(readonly, nonatomic) NSString *serviceResumesDescription;
@property(readonly, nonatomic) id <GEOTransitLine> line;
- (id)initWithTransitLine:(id)arg1 blocked:(_Bool)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5 departuresSequence:(id)arg6;	// IMP=0x0000000000086e16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

