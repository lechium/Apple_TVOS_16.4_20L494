//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitDepartureSequence, GEOTransitLine;

@protocol MKInactiveTransitLine <NSObject>
@property(readonly, nonatomic) id <GEOTransitDepartureSequence> departuresSequence;
@property(readonly, nonatomic) NSString *serviceResumesDescription;
@property(readonly, nonatomic) id <GEOTransitLine> line;
@end

