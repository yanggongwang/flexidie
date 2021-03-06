//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IRSequence;

@interface IRSequenceAdapter : NSObject
{
    id  _delegate;
    IRSequence *_sections;
}

@property(readonly, nonatomic) IRSequence *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;

- (id)dataForSection:(long long)arg1;
- (id)dataForRowAtIndexPath:(id)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (id)initWithRows:(id)arg1;
- (id)initWithSections:(id)arg1;

@end

