//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBURL;

@protocol _SFPBTrack <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBActionItem *playAction;
@property(retain, nonatomic) _SFPBURL *preview;
@property(nonatomic) _Bool highlighted;
@property(copy, nonatomic) NSString *duration;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

