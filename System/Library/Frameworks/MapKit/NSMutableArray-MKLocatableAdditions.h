//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (MKLocatableAdditions)
- (void)_mapkit_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x00600000000dc977
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1 ascending:(_Bool)arg2;	// IMP=0x00600000000dc920
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00600000000dc909
- (void)_mapkit_sortUsingLongitudeAscending:(_Bool)arg1;	// IMP=0x00600000000dc8ae
- (void)_mapkit_sortUsingLongitude;	// IMP=0x00600000000dc897
- (void)_mapkit_sortUsingLatitudeAscending:(_Bool)arg1;	// IMP=0x00600000000dc842
- (void)_mapkit_sortUsingLatitude;	// IMP=0x00600000000dc82b
- (id)_mapkit_popLastObject;	// IMP=0x00600000000dc7e3
@end

