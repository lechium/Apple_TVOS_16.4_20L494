//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBString;

@protocol _INPBSupportedTrafficIncidentType <NSObject>
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasLocalizedDisplayString;
@property(retain, nonatomic) _INPBString *localizedDisplayString;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

