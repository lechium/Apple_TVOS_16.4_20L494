//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationAnnotation : NSObject
{
    struct CLLocationCoordinate2D _coordinate;	// 8 = 0x8
    CLLocation *_location;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c6b71
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long representation;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

