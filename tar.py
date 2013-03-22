import tarfile,re,os

p=re.compile(".*" + os.sep + "([^" + os.sep + "]+)")

def fileFilter(fname):
    ret=False
    global p
    if fname.find(".git") > -1:
        ret=True
    m = p.match(fname)
    if None != m:
        sfname=m.group(1)
        print("Short name: " + sfname)
    return ret


def createTarFile():
    tar = tarfile.open("sample.tgz", "w:gz", dereference=True,)
    tar.add("../..",  exclude=fileFilter,)

createTarFile()
