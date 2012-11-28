

{
    'targets': [
    {
        'target_name': 'hello',
        'sources': [ 'src/hello.cc' ]
    },
    {
        'target_name': 'addon',
        'sources': [ 'src/addon.cc' ]
    },
    {
        'target_name': 'addon1',
        'sources': [ 
            'src/addon1.cc',
            'src/myobject.cc',
            'src/myobject.h',
        ]
    },
    {
        'target_name': 'xchart',
        'sources': [
            'src/xchart.cc', 
            ],
        'conditions': [
        ['OS=="linux"', {
            'cflags': [
                '<!@(pkg-config --cflags QtCore QtGui QtTest)'
                ],
            'ldflags': [
                '<!@(pkg-config --libs-only-L --libs-only-other QtCore QtGui QtTest)'
                ],
            'libraries': [
                '<!@(pkg-config --libs-only-l QtCore QtGui QtTest)'
                ]
        }]
        ]
    }
    ]


}
