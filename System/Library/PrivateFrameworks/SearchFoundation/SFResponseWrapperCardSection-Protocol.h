//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, SFCATModel, SFPatternModel;

@protocol SFResponseWrapperCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *pattern_models;
@property(retain, nonatomic) SFPatternModel *pattern_model;
@property(copy, nonatomic) NSData *visualCATOutput;
@property(retain, nonatomic) SFCATModel *catModel;
@end

