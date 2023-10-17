//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol HMBModelProperties
- (_Bool)hmbPropertyIsReadOnly:(NSString *)arg1;
- (_Bool)hmbPropertyWasSet:(NSString *)arg1;
- (_Bool)hmbPropertyIsAvailable:(NSString *)arg1;
- (id)hmbPropertyNamed:(NSString *)arg1;
- (id)hmbPropertyNamed:(NSString *)arg1 isSet:(_Bool *)arg2;
- (id)hmbDefaultValueForPropertyNamed:(NSString *)arg1;
- (void)hmbUnsetPropertyNamed:(NSString *)arg1;
- (void)hmbSetProperty:(id)arg1 named:(NSString *)arg2;
@end
