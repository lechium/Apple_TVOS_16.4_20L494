//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CalXMLElementRedactionRule : NSObject
{
    int _elementName;	// 8 = 0x8
    int _content;	// 12 = 0xc
    int _cdata;	// 16 = 0x10
    NSDictionary *_attributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000292c5
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property int cdata; // @synthesize cdata=_cdata;
@property int content; // @synthesize content=_content;
@property int elementName; // @synthesize elementName=_elementName;
- (id)redactionRuleForAttribute:(id)arg1;	// IMP=0x000000000002909e

@end

